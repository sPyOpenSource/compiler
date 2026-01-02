// CLASS: org/luaj/vm2/compiler/DumpState extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_DumpState_static {s8 ALLOW_1INTEGER_1CASTING_0; s32 NUMBER_1FORMAT_1FLOATS_1OR_1DOUBLES_1; s32 NUMBER_1FORMAT_1INTS_1ONLY_2; s32 NUMBER_1FORMAT_1NUM_1PATCH_1INT32_3; s32 NUMBER_1FORMAT_1DEFAULT_4; s32 SIZEOF_1INT_8; s32 SIZEOF_1SIZET_9; s32 SIZEOF_1INSTRUCTION_10;  };
struct org_luaj_vm2_compiler_DumpState_static static_var_org_luaj_vm2_compiler_DumpState = {0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_org_luaj_vm2_compiler_DumpState_from_org_luaj_vm2_compiler_DumpState[] = {
    func_org_luaj_vm2_compiler_DumpState_dumpBlock___3BI_V,  //0
    func_org_luaj_vm2_compiler_DumpState_dumpChar__I_V,  //1
    func_org_luaj_vm2_compiler_DumpState_dumpInt__I_V,  //2
    func_org_luaj_vm2_compiler_DumpState_dumpString__Lorg_luaj_vm2_LuaString_2_V,  //3
    func_org_luaj_vm2_compiler_DumpState_dumpDouble__D_V,  //4
    func_org_luaj_vm2_compiler_DumpState_dumpCode__Lorg_luaj_vm2_Prototype_2_V,  //5
    func_org_luaj_vm2_compiler_DumpState_dumpConstants__Lorg_luaj_vm2_Prototype_2_V,  //6
    func_org_luaj_vm2_compiler_DumpState_dumpUpvalues__Lorg_luaj_vm2_Prototype_2_V,  //7
    func_org_luaj_vm2_compiler_DumpState_dumpDebug__Lorg_luaj_vm2_Prototype_2_V,  //8
    func_org_luaj_vm2_compiler_DumpState_dumpFunction__Lorg_luaj_vm2_Prototype_2_V,  //9
    func_org_luaj_vm2_compiler_DumpState_dumpHeader___V  //10
};
__refer arr_vmtable_org_luaj_vm2_compiler_DumpState_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_DumpState[] = {
    {273, 11, arr_vmtable_org_luaj_vm2_compiler_DumpState_from_org_luaj_vm2_compiler_DumpState}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_DumpState_from_java_lang_Object}, //1
};



// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_DumpState__init___Ljava_io_OutputStream_2Z_V(JThreadRuntime *runtime, struct java_io_OutputStream* p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1597, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 99 , L1723848804 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 99;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 88 , L1252820474 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/compiler/DumpState IS_LITTLE_ENDIAN Z
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->IS_1LITTLE_1ENDIAN_5 = stack[sp + 1].i;
    ; 
    //  line no 89 , L570422884 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/DumpState NUMBER_FORMAT I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->NUMBER_1FORMAT_6 = stack[sp + 1].i;
    ; 
    //  line no 90 , L101162229 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 8
    stack[sp++].i = 8;
    // putfield org/luaj/vm2/compiler/DumpState SIZEOF_LUA_NUMBER I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->SIZEOF_1LUA_1NUMBER_7 = stack[sp + 1].i;
    ; 
    //  line no 100 , L509806761 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/io/DataOutputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 205);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/io/DataOutputStream.<init>(Ljava/io/OutputStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_DataOutputStream__init___Ljava_io_OutputStream_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->writer_11 = rstack[sp + 1].obj;
    ; 
    //  line no 101 , L818859466 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/DumpState strip Z
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->strip_12 = stack[sp + 1].i;
    ; 
    //  line no 102 , L1859928417 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/DumpState status I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->status_13 = stack[sp + 1].i;
    ; 
    //  line no 103 , L1418102907 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState__init___Ljava_io_OutputStream_2Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState__init___Ljava_io_OutputStream_2Z_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_compiler_DumpState_dumpBlock___3BI_V(JThreadRuntime *runtime, JArray * p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1598, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 106 , L339788561 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokevirtual java/io/DataOutputStream.write([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 205, 1);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 107 , L412835761 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpBlock___3BI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpBlock___3BI_V(runtime, ins, para[0].i);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpChar__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1599, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 110 , L501036152 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 110;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 111 , L261567641 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpChar__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpChar__I_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpInt__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1600, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 114 , L1137667747 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 114;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState IS_LITTLE_ENDIAN Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->IS_1LITTLE_1ENDIAN_5;
    sp += 0;
    if(stack[--sp].i  == 0) goto L935722070;
    ; 
    //  line no 115 , L29369803 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp++].i = local[1].i;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // invokevirtual java/io/DataOutputStream.writeByte(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 116 , L1350720002 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp++].i = local[1].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // invokevirtual java/io/DataOutputStream.writeByte(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 117 , L1753259207 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp++].i = local[1].i;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // invokevirtual java/io/DataOutputStream.writeByte(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 118 , L1883237069 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp++].i = local[1].i;
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // invokevirtual java/io/DataOutputStream.writeByte(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1884387196;
    L935722070:
    //  line no 120 , L935722070 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/DataOutputStream.writeInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 8);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1884387196:
    //  line no 122 , L1884387196 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpInt__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpInt__I_V(runtime, ins);
}


// locals: 3
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpString__Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1601, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 125 , L1590404373 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 125;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/LuaString.len()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 84);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 126 , L1361921411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 127 , L716972621 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.write(Ljava/io/DataOutputStream;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_io_DataOutputStream*,s32,s32) = find_method(__ins->vm_table, 31, 83);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 128 , L332234405 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 129 , L271422148 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpString__Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpString__Lorg_luaj_vm2_LuaString_2_V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpDouble__D_V(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1602, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 132 , L1618099562 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 132;
    stack[sp].d = local[1].d;
    sp += 2;
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[3].j = stack[sp].j;
    ; 
    //  line no 133 , L405950359 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState IS_LITTLE_ENDIAN Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->IS_1LITTLE_1ENDIAN_5;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1693799911;
    ; 
    //  line no 134 , L1897368146 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[3].j;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 135 , L16736375 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[3].j;
    sp += 2;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L180078856;
    L1693799911:
    //  line no 137 , L1693799911 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    stack[sp].j = local[3].j;
    sp += 2;
    // invokevirtual java/io/DataOutputStream.writeLong(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 205, 9);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L180078856:
    //  line no 139 , L180078856 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpDouble__D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpDouble__D_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpCode__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1603, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 142 , L161982472 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 142;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->code_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 143 , L1914740115 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1914740115
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 144 , L646445398 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 145 , L502102804 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L700348233:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1602530280;
    ; 
    //  line no 146 , L1179689991 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // arrload s32  ,  L1179689991 bc index = 
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
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 145 , L806572546 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L700348233;
    L1602530280:
    //  line no 147 , L1602530280 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpCode__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpCode__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 6
// stack: 4
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpConstants__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1604, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 150 , L283923004 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 150;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 151 , L1407167674 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1407167674
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    ; 
    //  line no 152 , L2037806977 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 153 , L2017530134 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L181326224:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L609879567;
    ; 
    //  line no 154 , L1859823482 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1859823482 bc index = 
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 155 , L509858326 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.type()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 0:
            goto L381930033;
        case 1:
            goto L756637412;
        case 2:
            goto L1658704411;
        case 3:
            goto L761973299;
        case 4:
            goto L564893839;
        default:
            goto L1658704411;
    }
    L381930033:
    //  line no 157 , L381930033 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 158 , L691096777 , bytecode index = 
    goto L1312348533;
    L756637412:
    //  line no 160 , L756637412 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 161 , L905488851 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toboolean()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 15);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1223303171;
    // iconst_1
    stack[sp++].i = 1;
    goto L1797159635;
    L1223303171:
    // iconst_0
    stack[sp++].i = 0;
    L1797159635:
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpChar(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 162 , L1676010932 , bytecode index = 
    goto L1312348533;
    L761973299:
    //  line no 164 , L761973299 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState NUMBER_FORMAT I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->NUMBER_1FORMAT_6;
    sp += 0;
    switch(stack[--sp].i){
        case 0:
            goto L173059685;
        case 1:
            goto L310412574;
        case 2:
            goto L329481770;
        case 3:
            goto L329481770;
        case 4:
            goto L1585711807;
        default:
            goto L329481770;
    }
    L173059685:
    //  line no 166 , L173059685 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 167 , L1457417579 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.todouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 18);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpDouble(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 273, 4);
        __func_p(runtime, stack[sp + 0].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 168 , L1500697171 , bytecode index = 
    goto L1312348533;
    L310412574:
    //  line no 170 , L310412574 , bytecode index = 
    // getstatic org/luaj/vm2/compiler/DumpState ALLOW_INTEGER_CASTING Z
    stack[sp].i =static_var_org_luaj_vm2_compiler_DumpState.ALLOW_1INTEGER_1CASTING_0;
    sp += 1;
    if(stack[--sp].i  != 0) goto L1338770454;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isint()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1338770454;
    ; 
    //  line no 171 , L836972194 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2916);
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
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 41, 7);
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L836972194 in labeltable is :L836972194
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 171;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1338770454:
    //  line no 172 , L1338770454 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 173 , L343128256 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 174 , L1532756055 , bytecode index = 
    goto L1312348533;
    L1585711807:
    //  line no 176 , L1585711807 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.isint()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1956598686;
    ; 
    //  line no 177 , L1554118033 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    //  bipush -2
    stack[sp++].i = -2;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 178 , L1428022141 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.toint()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 20);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1312348533;
    L1956598686:
    //  line no 180 , L1956598686 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 181 , L1861754673 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/LuaValue.todouble()D
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        f64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 18);
        stack[sp].d = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpDouble(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 273, 4);
        __func_p(runtime, stack[sp + 0].d);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 183 , L1618326227 , bytecode index = 
    goto L1312348533;
    L329481770:
    //  line no 185 , L329481770 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2917);
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
    // getfield org/luaj/vm2/compiler/DumpState NUMBER_FORMAT I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->NUMBER_1FORMAT_6;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L329481770 in labeltable is :L329481770
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 185;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L564893839:
    //  line no 189 , L564893839 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 190 , L866901553 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // checkcast org/luaj/vm2/LuaString
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 240);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpString(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 273, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 191 , L160945458 , bytecode index = 
    goto L1312348533;
    L1658704411:
    //  line no 193 , L1658704411 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2918);
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
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 41, 7);
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1658704411 in labeltable is :L1658704411
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 193;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1312348533:
    //  line no 153 , L1312348533 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L181326224;
    L609879567:
    //  line no 196 , L609879567 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // arraylength  label  L609879567
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    ; 
    //  line no 197 , L657998502 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 198 , L1788256184 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L128028301:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L807986446;
    ; 
    //  line no 199 , L1432403167 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1432403167 bc index = 
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
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpFunction(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 9);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 198 , L190153364 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L128028301;
    L807986446:
    //  line no 200 , L807986446 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpConstants__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpConstants__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpUpvalues__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1605, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 203 , L2004628751 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 203;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L2004628751
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    ; 
    //  line no 204 , L665512315 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 205 , L5021240 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1562249660:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1272744797;
    ; 
    //  line no 206 , L1003307628 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1003307628 bc index = 
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
    // getfield org/luaj/vm2/Upvaldesc instack Z
    stack[sp - 1].i = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->instack_1;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1595188851;
    // iconst_1
    stack[sp++].i = 1;
    goto L1919555524;
    L1595188851:
    // iconst_0
    stack[sp++].i = 0;
    L1919555524:
    // invokevirtual java/io/DataOutputStream.writeByte(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 207 , L1573125303 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1573125303 bc index = 
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
    // getfield org/luaj/vm2/Upvaldesc idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->idx_2;
    sp += 0;
    // invokevirtual java/io/DataOutputStream.writeByte(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 205 , L206310209 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1562249660;
    L1272744797:
    //  line no 209 , L1272744797 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpUpvalues__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpUpvalues__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpDebug__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1606, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 213 , L1416097444 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 213;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState strip Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->strip_12;
    sp += 0;
    if(stack[--sp].i  == 0) goto L369333979;
    ; 
    //  line no 214 , L2054787417 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L67811496;
    L369333979:
    //  line no 216 , L369333979 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->source_6;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpString(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 273, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L67811496:
    //  line no 217 , L67811496 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState strip Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->strip_12;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1878225987;
    // iconst_0
    stack[sp++].i = 0;
    goto L1707901480;
    L1878225987:
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    // arraylength  label  L1878225987
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    L1707901480:
    local[3].i = stack[--sp].i;
    ; 
    //  line no 218 , L1393112209 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 219 , L35068320 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1991386317:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2012095985;
    ; 
    //  line no 220 , L1842952737 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L1842952737 bc index = 
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
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 219 , L1471800355 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1991386317;
    L2012095985:
    //  line no 221 , L2012095985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState strip Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->strip_12;
    sp += 0;
    if(stack[--sp].i  == 0) goto L810169941;
    // iconst_0
    stack[sp++].i = 0;
    goto L915233792;
    L810169941:
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    // arraylength  label  L810169941
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    L915233792:
    local[3].i = stack[--sp].i;
    ; 
    //  line no 222 , L312565954 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 223 , L178325065 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1798861270:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L923360749;
    ; 
    //  line no 224 , L783785150 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L783785150 bc index = 
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 225 , L749098095 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LocVars varname Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LocVars*)rstack[sp - 1].obj)->varname_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpString(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 273, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 226 , L70788844 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LocVars startpc I
    stack[sp - 1].i = ((struct org_luaj_vm2_LocVars*)rstack[sp - 1].obj)->startpc_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 227 , L2032399795 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/LocVars endpc I
    stack[sp - 1].i = ((struct org_luaj_vm2_LocVars*)rstack[sp - 1].obj)->endpc_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 223 , L1801704517 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1798861270;
    L923360749:
    //  line no 229 , L923360749 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState strip Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->strip_12;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1970856042;
    // iconst_0
    stack[sp++].i = 0;
    goto L817018735;
    L1970856042:
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L1970856042
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    L817018735:
    local[3].i = stack[--sp].i;
    ; 
    //  line no 230 , L1457148583 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 231 , L602830277 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L296204898:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L873168630;
    ; 
    //  line no 232 , L809520570 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L809520570 bc index = 
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
    // getfield org/luaj/vm2/Upvaldesc name Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Upvaldesc*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpString(Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 273, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 231 , L1615873578 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L296204898;
    L873168630:
    //  line no 233 , L873168630 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpDebug__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpDebug__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_DumpState_dumpFunction__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1607, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 236 , L589016913 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 236;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype linedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->linedefined_7;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 237 , L293870357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype lastlinedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lastlinedefined_8;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpInt(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 2);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 238 , L1938259481 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype numparams I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->numparams_9;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpChar(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 239 , L2065730373 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype is_vararg I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->is_1vararg_10;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpChar(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 240 , L96453207 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype maxstacksize I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->maxstacksize_11;
    sp += 0;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpChar(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 273, 1);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 241 , L877804870 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpCode(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 5);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 242 , L2095970915 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpConstants(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 243 , L65551384 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpUpvalues(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 244 , L2017393480 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpDebug(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 8);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 245 , L1562595588 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpFunction__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpFunction__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_compiler_DumpState_dumpHeader___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1608, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 248 , L205810452 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 248;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // getstatic org/luaj/vm2/LoadState LUA_SIGNATURE [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUA_1SIGNATURE_17;
    sp += 1;
    // invokevirtual java/io/DataOutputStream.write([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 122, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 249 , L61814127 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    //  bipush 82
    stack[sp++].i = 82;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 250 , L1145302895 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 251 , L2118571592 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState IS_LITTLE_ENDIAN Z
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->IS_1LITTLE_1ENDIAN_5;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1366629983;
    // iconst_1
    stack[sp++].i = 1;
    goto L722160979;
    L1366629983:
    // iconst_0
    stack[sp++].i = 0;
    L722160979:
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 252 , L1885927370 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 253 , L945064729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 254 , L1101721002 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 255 , L809128217 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState SIZEOF_LUA_NUMBER I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->SIZEOF_1LUA_1NUMBER_7;
    sp += 0;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 256 , L123418227 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState NUMBER_FORMAT I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->NUMBER_1FORMAT_6;
    sp += 0;
    // invokevirtual java/io/DataOutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 205, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 257 , L466319810 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/DumpState writer Ljava/io/DataOutputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->writer_11;
    sp += 0;
    // getstatic org/luaj/vm2/LoadState LUAC_TAIL [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUAC_1TAIL_18;
    sp += 1;
    // invokevirtual java/io/DataOutputStream.write([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 122, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 258 , L219812012 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_DumpState_dumpHeader___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState_dumpHeader___V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 4
s32 func_org_luaj_vm2_compiler_DumpState_dump__Lorg_luaj_vm2_Prototype_2Ljava_io_OutputStream_2Z_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_DumpState* p0, struct org_luaj_vm2_Prototype* p1, struct java_io_OutputStream* p2, s8 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1609, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 264 , L838627755 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 264;
    // new org/luaj/vm2/compiler/DumpState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 273);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/compiler/DumpState.<init>(Ljava/io/OutputStream;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_DumpState__init___Ljava_io_OutputStream_2Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 265 , L1899567935 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpHeader()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 273, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 266 , L754707140 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpFunction(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 9);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 267 , L316355462 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/DumpState status I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->status_13;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_DumpState_dump__Lorg_luaj_vm2_Prototype_2Ljava_io_OutputStream_2Z_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_DumpState_dump__Lorg_luaj_vm2_Prototype_2Ljava_io_OutputStream_2Z_I(runtime, para[0].obj, para[1].obj, para[2].obj, para[3].i);
}


// locals: 6
// stack: 4
// args: 6
s32 func_org_luaj_vm2_compiler_DumpState_dump__Lorg_luaj_vm2_Prototype_2Ljava_io_OutputStream_2ZIZ_I(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_DumpState* p0, struct org_luaj_vm2_Prototype* p1, struct java_io_OutputStream* p2, s8 p3, s32 p4, s8 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1610, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 282 , L2040623756 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 282;
    stack[sp++].i = local[3].i;
    switch(stack[--sp].i){
        case 0:
            goto L1106468732;
        case 1:
            goto L1106468732;
        case 2:
            goto L176097974;
        case 3:
            goto L176097974;
        case 4:
            goto L1106468732;
        default:
            goto L176097974;
    }
    L1106468732:
    //  line no 286 , L1106468732 , bytecode index = 
    goto L1120072844;
    L176097974:
    //  line no 288 , L176097974 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2917);
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
    stack[sp++].i = local[3].i;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L176097974 in labeltable is :L176097974
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 288;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1120072844:
    //  line no 290 , L1120072844 , bytecode index = 
    // new org/luaj/vm2/compiler/DumpState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 273);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/compiler/DumpState.<init>(Ljava/io/OutputStream;Z)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_DumpState__init___Ljava_io_OutputStream_2Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 291 , L805690186 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[4].i;
    // putfield org/luaj/vm2/compiler/DumpState IS_LITTLE_ENDIAN Z
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->IS_1LITTLE_1ENDIAN_5 = stack[sp + 1].i;
    ; 
    //  line no 292 , L1113414982 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/compiler/DumpState NUMBER_FORMAT I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->NUMBER_1FORMAT_6 = stack[sp + 1].i;
    ; 
    //  line no 293 , L428798670 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1287455719;
    // iconst_4
    stack[sp++].i = 4;
    goto L1392271025;
    L1287455719:
    //  bipush 8
    stack[sp++].i = 8;
    L1392271025:
    // putfield org/luaj/vm2/compiler/DumpState SIZEOF_LUA_NUMBER I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp + 0].obj)->SIZEOF_1LUA_1NUMBER_7 = stack[sp + 1].i;
    ; 
    //  line no 294 , L2053349061 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpHeader()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 273, 10);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 295 , L336927685 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/compiler/DumpState.dumpFunction(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 273, 9);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 296 , L806588571 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // getfield org/luaj/vm2/compiler/DumpState status I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_DumpState*)rstack[sp - 1].obj)->status_13;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_DumpState_dump__Lorg_luaj_vm2_Prototype_2Ljava_io_OutputStream_2ZIZ_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_DumpState_dump__Lorg_luaj_vm2_Prototype_2Ljava_io_OutputStream_2ZIZ_I(runtime, para[0].obj, para[1].obj, para[2].obj, para[3].i, para[4].i, para[5].i);
}


// locals: 0
// stack: 1
// args: 1
void func_org_luaj_vm2_compiler_DumpState__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_DumpState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1611, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 73 , L1717136008 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 73;
    // iconst_0
    stack[sp++].i = 0;
    // putstatic org/luaj/vm2/compiler/DumpState ALLOW_INTEGER_CASTING Z
    sp -= 1;
    static_var_org_luaj_vm2_compiler_DumpState.ALLOW_1INTEGER_1CASTING_0 = stack[sp].i;
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

void bridge_org_luaj_vm2_compiler_DumpState__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_DumpState__clinit____V(runtime, para[0].obj);
}


