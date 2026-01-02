// CLASS: org/luaj/vm2/LoadState extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LoadState_static {struct org_luaj_vm2_Globals_00024Undumper* instance_0; s32 NUMBER_1FORMAT_1FLOATS_1OR_1DOUBLES_1; s32 NUMBER_1FORMAT_1INTS_1ONLY_2; s32 NUMBER_1FORMAT_1NUM_1PATCH_1INT32_3; s32 LUA_1TINT_4; s32 LUA_1TNONE_5; s32 LUA_1TNIL_6; s32 LUA_1TBOOLEAN_7; s32 LUA_1TLIGHTUSERDATA_8; s32 LUA_1TNUMBER_9; s32 LUA_1TSTRING_10; s32 LUA_1TTABLE_11; s32 LUA_1TFUNCTION_12; s32 LUA_1TUSERDATA_13; s32 LUA_1TTHREAD_14; s32 LUA_1TVALUE_15; struct java_lang_String* encoding_16; JArray * LUA_1SIGNATURE_17; JArray * LUAC_1TAIL_18; struct java_lang_String* SOURCE_1BINARY_1STRING_19; s32 LUAC_1VERSION_20; s32 LUAC_1FORMAT_21; s32 LUAC_1HEADERSIZE_22; JArray * NOVALUES_33; JArray * NOPROTOS_34; JArray * NOLOCVARS_35; JArray * NOUPVALDESCS_36; JArray * NOINTS_37;  };
struct org_luaj_vm2_LoadState_static static_var_org_luaj_vm2_LoadState = {NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, NULL, NULL, 0, 0, 0, NULL, NULL, NULL, NULL, NULL};


__refer arr_vmtable_org_luaj_vm2_LoadState_from_org_luaj_vm2_LoadState[] = {
    func_org_luaj_vm2_LoadState_loadInt___I,  //0
    func_org_luaj_vm2_LoadState_loadIntArray____3I,  //1
    func_org_luaj_vm2_LoadState_loadInt64___J,  //2
    func_org_luaj_vm2_LoadState_loadString___Lorg_luaj_vm2_LuaString_2,  //3
    func_org_luaj_vm2_LoadState_loadNumber___Lorg_luaj_vm2_LuaValue_2,  //4
    func_org_luaj_vm2_LoadState_loadConstants__Lorg_luaj_vm2_Prototype_2_V,  //5
    func_org_luaj_vm2_LoadState_loadUpvalues__Lorg_luaj_vm2_Prototype_2_V,  //6
    func_org_luaj_vm2_LoadState_loadDebug__Lorg_luaj_vm2_Prototype_2_V,  //7
    func_org_luaj_vm2_LoadState_loadFunction__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Prototype_2,  //8
    func_org_luaj_vm2_LoadState_loadHeader___V  //9
};
__refer arr_vmtable_org_luaj_vm2_LoadState_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_LoadState[] = {
    {125, 10, arr_vmtable_org_luaj_vm2_LoadState_from_org_luaj_vm2_LoadState}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_LoadState_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 2
void func_org_luaj_vm2_LoadState_install__Lorg_luaj_vm2_Globals_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LoadState* p0, struct org_luaj_vm2_Globals* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 719, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 166 , L1273143001 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 166;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LoadState instance Lorg/luaj/vm2/Globals$Undumper;
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.instance_0;
    sp += 1;
    // putfield org/luaj/vm2/Globals undumper Lorg/luaj/vm2/Globals$Undumper;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->undumper_61 = rstack[sp + 1].obj;
    ; 
    //  line no 167 , L1418555530 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_install__Lorg_luaj_vm2_Globals_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_install__Lorg_luaj_vm2_Globals_2_V(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 4
// args: 0
s32 func_org_luaj_vm2_LoadState_loadInt___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 720, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 173 , L1408974251 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 173;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_4
    stack[sp++].i = 4;
    // invokevirtual java/io/DataInputStream.readFully([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 124, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 174 , L212890971 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState luacLittleEndian Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->luacLittleEndian_25;
    sp += 0;
    if(stack[--sp].i  == 0) goto L856055143;
    ; 
    //  line no 175 , L1898325501 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    // arrload s8  ,  L1898325501 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // arrload s8  ,  L1898325501 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s8  ,  L1898325501 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s8  ,  L1898325501 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    goto L2075809815;
    L856055143:
    //  line no 176 , L856055143 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s8  ,  L856055143 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s8  ,  L856055143 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // arrload s8  ,  L856055143 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    // arrload s8  ,  L856055143 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    L2075809815:
    //  line no 174 , L2075809815 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_loadInt___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_LoadState_loadInt___I(runtime, ins);
}


// locals: 6
// stack: 7
// args: 0
JArray * func_org_luaj_vm2_LoadState_loadIntArray____3I(JThreadRuntime *runtime){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 721, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 183 , L1967355409 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 183;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 184 , L889891977 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L475603167;
    ; 
    //  line no 185 , L402249858 , bytecode index = 
    // getstatic org/luaj/vm2/LoadState NOINTS [I
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.NOINTS_37;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L475603167:
    //  line no 188 , L475603167 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 189 , L2045036434 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // arraylength  label  L2045036434
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L426394307;
    ; 
    //  line no 190 , L1281414889 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/LoadState buf [B
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->buf_38 = rstack[sp + 1].obj;
    L426394307:
    //  line no 191 , L426394307 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokevirtual java/io/DataInputStream.readFully([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 124, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 192 , L352598575 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 193 , L1250142026 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1261031890:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2135449562;
    ; 
    //  line no 194 , L673586830 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState luacLittleEndian Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->luacLittleEndian_25;
    sp += 0;
    if(stack[--sp].i  == 0) goto L225672073;
    ; 
    //  line no 195 , L139566260 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L139566260 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L139566260 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L139566260 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L139566260 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    goto L903525611;
    L225672073:
    //  line no 196 , L225672073 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L225672073 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L225672073 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L225672073 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    //  sipush 255
    stack[sp++].i = 255;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState buf [B
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->buf_38;
    sp += 0;
    stack[sp++].i = local[5].i;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L225672073 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    L903525611:
    // arrstore s32  ,  L903525611 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 193 , L764419760 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    // iinc slot 5 value 4
    local[5].i += 4;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1261031890;
    L2135449562:
    //  line no 198 , L2135449562 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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

void bridge_org_luaj_vm2_LoadState_loadIntArray____3I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_loadIntArray____3I(runtime, ins);
}


// locals: 3
// stack: 6
// args: 0
s64 func_org_luaj_vm2_LoadState_loadInt64___J(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 722, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 206 , L1058609221 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 206;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState luacLittleEndian Z
    stack[sp - 1].i = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->luacLittleEndian_25;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1594138273;
    ; 
    //  line no 207 , L1926004335 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 208 , L95396809 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    goto L151593342;
    L1594138273:
    //  line no 210 , L1594138273 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 211 , L405215542 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    L151593342:
    //  line no 213 , L151593342 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = stack[sp - 3].j << stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0xffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 4].j = stack[sp - 4].j | stack[sp - 2].j; 
    sp -= 2;
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_LoadState_loadInt64___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_org_luaj_vm2_LoadState_loadInt64___J(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_LoadState_loadString___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 723, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 220 , L138776324 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 220;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState luacSizeofSizeT I
    stack[sp - 1].i = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->luacSizeofSizeT_27;
    sp += 0;
    //  bipush 8
    stack[sp++].i = 8;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1208442275;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt64()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 2);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    goto L1758008124;
    L1208442275:
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1758008124:
    local[1].i = stack[--sp].i;
    ; 
    //  line no 221 , L2050339061 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1579957528;
    ; 
    //  line no 222 , L750029115 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1579957528:
    //  line no 223 , L1579957528 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 224 , L214187874 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/DataInputStream.readFully([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 124, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 225 , L1528923159 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1528923159
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaString.valueUsing([BII)Lorg/luaj/vm2/LuaString;
    {
        sp -= 4;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueUsing___3BII_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
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

void bridge_org_luaj_vm2_LoadState_loadString___Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_loadString___Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 9
// stack: 4
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LoadState_longBitsToLuaNumber__J_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_LoadState* p0, s64 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 724, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 234 , L1823409783 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 234;
    stack[sp].j = local[0].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x7fffffffffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1094523823;
    ; 
    //  line no 235 , L384515747 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue ZERO Lorg/luaj/vm2/LuaNumber;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.ZERO_17;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1094523823:
    //  line no 238 , L1094523823 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    //  bipush 52
    stack[sp++].i = 52;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    //  ldc 
    stack[sp].j = 0x7ffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    //  sipush 1023
    stack[sp++].i = 1023;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 240 , L657736958 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L867988177;
    stack[sp++].i = local[2].i;
    //  bipush 31
    stack[sp++].i = 31;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L867988177;
    ; 
    //  line no 241 , L443934570 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0xfffffffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[3].j = stack[sp].j;
    ; 
    //  line no 242 , L1428475041 , bytecode index = 
    //  bipush 52
    stack[sp++].i = 52;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 243 , L1345483087 , bytecode index = 
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp++].i = local[5].i;
    stack[sp - 3].j = stack[sp - 3].j << stack[sp - 1].i; 
    --sp;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[6].j = stack[sp].j;
    ; 
    //  line no 244 , L4766562 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    stack[sp].j = local[6].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L867988177;
    ; 
    //  line no 245 , L892555958 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    stack[sp++].i = local[5].i;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 246 , L1182908789 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L91912419;
    stack[sp++].i = local[8].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    goto L1076641925;
    L91912419:
    stack[sp++].i = local[8].i;
    L1076641925:
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L867988177:
    //  line no 250 , L867988177 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    // invokestatic java/lang/Double.longBitsToDouble(J)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Double_longBitsToDouble__J_D(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaValue.valueOf(D)Lorg/luaj/vm2/LuaNumber;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__D_Lorg_luaj_vm2_LuaNumber_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_org_luaj_vm2_LoadState_longBitsToLuaNumber__J_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_longBitsToLuaNumber__J_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].j);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_LoadState_loadNumber___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 725, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 259 , L661119548 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 259;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState luacNumberFormat I
    stack[sp - 1].i = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->luacNumberFormat_30;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1896622931;
    ; 
    //  line no 260 , L1401316767 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1896622931:
    //  line no 262 , L1896622931 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt64()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 2);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LoadState.longBitsToLuaNumber(J)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LoadState_longBitsToLuaNumber__J_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_org_luaj_vm2_LoadState_loadNumber___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_loadNumber___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 6
// stack: 4
// args: 1
void func_org_luaj_vm2_LoadState_loadConstants__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 726, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 272 , L216856121 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 272;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 273 , L480903748 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L2095064787;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L2095486832;
    L2095064787:
    // getstatic org/luaj/vm2/LoadState NOVALUES [Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.NOVALUES_33;
    sp += 1;
    L2095486832:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 274 , L391183339 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1529115495:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L646910062;
    ; 
    //  line no 275 , L1855610584 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case -2:
            goto L113411247;
        case -1:
            goto L2114289475;
        case 0:
            goto L1485891705;
        case 1:
            goto L1681920301;
        case 2:
            goto L2114289475;
        case 3:
            goto L837457281;
        case 4:
            goto L589273327;
        default:
            goto L2114289475;
    }
    L1485891705:
    //  line no 277 , L1485891705 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    // arrstore __refer  ,  L1485891705 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 278 , L2081652693 , bytecode index = 
    goto L406765571;
    L1681920301:
    //  line no 280 , L1681920301 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readUnsignedByte()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2107443224;
    // getstatic org/luaj/vm2/LuaValue TRUE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.TRUE_14;
    sp += 1;
    goto L572145572;
    L2107443224:
    // getstatic org/luaj/vm2/LuaValue FALSE Lorg/luaj/vm2/LuaBoolean;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.FALSE_15;
    sp += 1;
    L572145572:
    // arrstore __refer  ,  L572145572 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 281 , L1158676965 , bytecode index = 
    goto L406765571;
    L113411247:
    //  line no 283 , L113411247 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L113411247 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 284 , L725680028 , bytecode index = 
    goto L406765571;
    L837457281:
    //  line no 286 , L837457281 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadNumber()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L837457281 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 287 , L1040776996 , bytecode index = 
    goto L406765571;
    L589273327:
    //  line no 289 , L589273327 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadString()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L589273327 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 290 , L1293680734 , bytecode index = 
    goto L406765571;
    L2114289475:
    //  line no 292 , L2114289475 , bytecode index = 
    // new java/lang/IllegalStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 78);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1491);
    // invokespecial java/lang/IllegalStateException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalStateException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2114289475 in labeltable is :L2114289475
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 292;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L406765571:
    //  line no 274 , L406765571 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1529115495;
    L646910062:
    //  line no 295 , L646910062 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/Prototype k [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->k_0 = rstack[sp + 1].obj;
    ; 
    //  line no 297 , L138817329 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 298 , L609656250 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1574877131;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/Prototype; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1493));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L1894601438;
    L1574877131:
    // getstatic org/luaj/vm2/LoadState NOPROTOS [Lorg/luaj/vm2/Prototype;
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.NOPROTOS_34;
    sp += 1;
    L1894601438:
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 299 , L1231799381 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1497377679:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1904783235;
    ; 
    //  line no 300 , L1810458830 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->source_6;
    sp += 0;
    // invokevirtual org/luaj/vm2/LoadState.loadFunction(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 125, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1810458830 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 299 , L2083999882 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1497377679;
    L1904783235:
    //  line no 301 , L1904783235 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield org/luaj/vm2/Prototype p [Lorg/luaj/vm2/Prototype;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->p_2 = rstack[sp + 1].obj;
    ; 
    //  line no 302 , L611520720 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_loadConstants__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_loadConstants__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 6
// stack: 7
// args: 1
void func_org_luaj_vm2_LoadState_loadUpvalues__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 727, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 306 , L809300666 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 306;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 307 , L1984513847 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L1241529534;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/Upvaldesc; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1496));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L1082309267;
    L1241529534:
    // getstatic org/luaj/vm2/LoadState NOUPVALDESCS [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.NOUPVALDESCS_36;
    sp += 1;
    L1082309267:
    // putfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->upvalues_5 = rstack[sp + 1].obj;
    ; 
    //  line no 308 , L402405659 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L724608044:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1621002296;
    ; 
    //  line no 309 , L899543194 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1138697171;
    // iconst_1
    stack[sp++].i = 1;
    goto L1835073088;
    L1138697171:
    // iconst_0
    stack[sp++].i = 0;
    L1835073088:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 310 , L2032891036 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 311 , L602423811 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[3].i;
    // new org/luaj/vm2/Upvaldesc
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 126);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // aconst null
    rstack[sp++].obj = NULL;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    // invokespecial org/luaj/vm2/Upvaldesc.<init>(Lorg/luaj/vm2/LuaString;ZI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Upvaldesc__init___Lorg_luaj_vm2_LuaString_2ZI_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L602423811 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 308 , L429075478 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L724608044;
    L1621002296:
    //  line no 313 , L1621002296 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_loadUpvalues__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_loadUpvalues__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 7
// stack: 7
// args: 1
void func_org_luaj_vm2_LoadState_loadDebug__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 728, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 321 , L1363560175 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 321;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadString()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->source_6 = rstack[sp + 1].obj;
    ; 
    //  line no 322 , L811597470 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadIntArray()[I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype lineinfo [I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->lineinfo_3 = rstack[sp + 1].obj;
    ; 
    //  line no 323 , L808228639 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 324 , L426960147 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L2061543916;
    stack[sp++].i = local[2].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LocVars; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1499));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    goto L897848096;
    L2061543916:
    // getstatic org/luaj/vm2/LoadState NOLOCVARS [Lorg/luaj/vm2/LocVars;
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.NOLOCVARS_35;
    sp += 1;
    L897848096:
    // putfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->locvars_4 = rstack[sp + 1].obj;
    ; 
    //  line no 325 , L1640296160 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1863374262:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L272678513;
    ; 
    //  line no 326 , L88646218 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadString()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 327 , L1128132589 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 328 , L711540569 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 329 , L1062186835 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype locvars [Lorg/luaj/vm2/LocVars;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->locvars_4;
    sp += 0;
    stack[sp++].i = local[3].i;
    // new org/luaj/vm2/LocVars
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 127);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    // invokespecial org/luaj/vm2/LocVars.<init>(Lorg/luaj/vm2/LuaString;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LocVars__init___Lorg_luaj_vm2_LuaString_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1062186835 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 325 , L2144665602 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1863374262;
    L272678513:
    //  line no 332 , L272678513 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 333 , L1396431506 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L810267739:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1916575798;
    ; 
    //  line no 334 , L633240419 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L633240419 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadString()Lorg/luaj/vm2/LuaString;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Upvaldesc name Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_Upvaldesc*)rstack[sp + 0].obj)->name_0 = rstack[sp + 1].obj;
    ; 
    //  line no 333 , L685558284 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L810267739;
    L1916575798:
    //  line no 335 , L1916575798 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_loadDebug__Lorg_luaj_vm2_Prototype_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_loadDebug__Lorg_luaj_vm2_Prototype_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_LoadState_loadFunction__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 729, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 344 , L1391624125 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 344;
    // new org/luaj/vm2/Prototype
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 128);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/Prototype.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Prototype__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 349 , L79782883 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype linedefined I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->linedefined_7 = stack[sp + 1].i;
    ; 
    //  line no 350 , L1250121181 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadInt()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype lastlinedefined I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->lastlinedefined_8 = stack[sp + 1].i;
    ; 
    //  line no 351 , L1292738535 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readUnsignedByte()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype numparams I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->numparams_9 = stack[sp + 1].i;
    ; 
    //  line no 352 , L205721196 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readUnsignedByte()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype is_vararg I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->is_1vararg_10 = stack[sp + 1].i;
    ; 
    //  line no 353 , L51554940 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readUnsignedByte()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype maxstacksize I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->maxstacksize_11 = stack[sp + 1].i;
    ; 
    //  line no 354 , L1399794302 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadIntArray()[I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype code [I
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->code_1 = rstack[sp + 1].obj;
    ; 
    //  line no 355 , L1924949331 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadConstants(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 125, 5);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 356 , L1721246982 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadUpvalues(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 125, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 357 , L1892627171 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadDebug(Lorg/luaj/vm2/Prototype;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Prototype*) = find_method(__ins->vm_table, 125, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 364 , L1515833950 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_org_luaj_vm2_LoadState_loadFunction__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_loadFunction__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_Prototype_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 0
void func_org_luaj_vm2_LoadState_loadHeader___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 730, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 372 , L1816725203 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 372;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacVersion I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacVersion_23 = stack[sp + 1].i;
    ; 
    //  line no 373 , L1704491411 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacFormat I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacFormat_24 = stack[sp + 1].i;
    ; 
    //  line no 374 , L1896305732 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1328718765;
    // iconst_1
    stack[sp++].i = 1;
    goto L1802066694;
    L1328718765:
    // iconst_0
    stack[sp++].i = 0;
    L1802066694:
    // putfield org/luaj/vm2/LoadState luacLittleEndian Z
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacLittleEndian_25 = stack[sp + 1].i;
    ; 
    //  line no 375 , L1293677337 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacSizeofInt I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacSizeofInt_26 = stack[sp + 1].i;
    ; 
    //  line no 376 , L116734858 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacSizeofSizeT I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacSizeofSizeT_27 = stack[sp + 1].i;
    ; 
    //  line no 377 , L1551945522 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacSizeofInstruction I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacSizeofInstruction_28 = stack[sp + 1].i;
    ; 
    //  line no 378 , L2106592975 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacSizeofLuaNumber I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacSizeofLuaNumber_29 = stack[sp + 1].i;
    ; 
    //  line no 379 , L1862383967 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState luacNumberFormat I
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->luacNumberFormat_30 = stack[sp + 1].i;
    ; 
    //  line no 380 , L1074263646 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L438589491:
    stack[sp++].i = local[1].i;
    // getstatic org/luaj/vm2/LoadState LUAC_TAIL [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUAC_1TAIL_18;
    sp += 1;
    // arraylength  label  L438589491
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1732238286;
    ; 
    //  line no 381 , L93740343 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->is_31;
    sp += 0;
    // invokevirtual java/io/DataInputStream.readByte()B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 124, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/LoadState LUAC_TAIL [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUAC_1TAIL_18;
    sp += 1;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L93740343 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2052910813;
    ; 
    //  line no 382 , L1107412069 , bytecode index = 
    // new org/luaj/vm2/LuaError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1503);
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
    stack[sp++].i = local[1].i;
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
    // invokespecial org/luaj/vm2/LuaError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1107412069 in labeltable is :L1107412069
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 382;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2052910813:
    //  line no 380 , L2052910813 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L438589491;
    L1732238286:
    //  line no 383 , L1732238286 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_loadHeader___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_loadHeader___V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_LoadState_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct org_luaj_vm2_LoadState* p0, struct java_io_InputStream* p1, struct java_lang_String* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 731, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 394 , L1823541245 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 394;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/LoadState LUA_SIGNATURE [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUA_1SIGNATURE_17;
    sp += 1;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s8  ,  L1823541245 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1896232624;
    rstack[sp++].obj = rlocal[0].obj;
    ; 
    //  line no 395 , L1038677529 , bytecode index = 
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/LoadState LUA_SIGNATURE [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUA_1SIGNATURE_17;
    sp += 1;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s8  ,  L1038677529 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1896232624;
    rstack[sp++].obj = rlocal[0].obj;
    ; 
    //  line no 396 , L716487794 , bytecode index = 
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/LoadState LUA_SIGNATURE [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUA_1SIGNATURE_17;
    sp += 1;
    // iconst_2
    stack[sp++].i = 2;
    // arrload s8  ,  L716487794 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1896232624;
    rstack[sp++].obj = rlocal[0].obj;
    ; 
    //  line no 397 , L1314838582 , bytecode index = 
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic org/luaj/vm2/LoadState LUA_SIGNATURE [B
    rstack[sp].obj =static_var_org_luaj_vm2_LoadState.LUA_1SIGNATURE_17;
    sp += 1;
    // iconst_3
    stack[sp++].i = 3;
    // arrload s8  ,  L1314838582 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L246273275;
    L1896232624:
    //  line no 398 , L1896232624 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L246273275:
    //  line no 401 , L246273275 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/LoadState.getSourceName(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LoadState_getSourceName__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 402 , L1947185929 , bytecode index = 
    // new org/luaj/vm2/LoadState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 125);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/luaj/vm2/LoadState.<init>(Ljava/io/InputStream;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LoadState__init___Ljava_io_InputStream_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 403 , L2077742806 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/LoadState.loadHeader()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 125, 9);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 406 , L1139814130 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/LoadState luacNumberFormat I
    stack[sp - 1].i = ((struct org_luaj_vm2_LoadState*)rstack[sp - 1].obj)->luacNumberFormat_30;
    sp += 0;
    switch(stack[--sp].i){
        case 0:
            goto L713312506;
        case 1:
            goto L713312506;
        case 2:
            goto L597307515;
        case 3:
            goto L597307515;
        case 4:
            goto L713312506;
        default:
            goto L597307515;
    }
    L713312506:
    //  line no 410 , L713312506 , bytecode index = 
    goto L1864387098;
    L597307515:
    //  line no 412 , L597307515 , bytecode index = 
    // new org/luaj/vm2/LuaError
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 47);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1506);
    // invokespecial org/luaj/vm2/LuaError.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaError__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L597307515 in labeltable is :L597307515
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 412;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1864387098:
    //  line no 414 , L1864387098 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaString.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LoadState.loadFunction(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 125, 8);
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

void bridge_org_luaj_vm2_LoadState_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 2
// stack: 2
// args: 2
struct java_lang_String* func_org_luaj_vm2_LoadState_getSourceName__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct org_luaj_vm2_LoadState* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 732, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 423 , L1603177117 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 423;
    rstack[sp++].obj = rlocal[0].obj;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 424 , L1464191502 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1508);
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 14);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L987249254;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1509);
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 14);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1020154737;
    L987249254:
    //  line no 425 , L987249254 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/String.substring(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 21);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    goto L398457879;
    L1020154737:
    //  line no 426 , L1020154737 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1510);
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 14);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L398457879;
    ; 
    //  line no 427 , L1850954068 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1511);
    rlocal[1].obj = rstack[--sp].obj;
    L398457879:
    //  line no 428 , L398457879 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState_getSourceName__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_getSourceName__Ljava_lang_String_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 3
// stack: 4
// args: 2
void func_org_luaj_vm2_LoadState__init___Ljava_io_InputStream_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 733, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 432 , L1530446316 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 432;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 162 , L865059288 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 512
    stack[sp++].i = 512;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/LoadState buf [B
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->buf_38 = rstack[sp + 1].obj;
    ; 
    //  line no 433 , L1193471756 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/LoadState name Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->name_32 = rstack[sp + 1].obj;
    ; 
    //  line no 434 , L1222768327 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/io/DataInputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 124);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/io/DataInputStream.<init>(Ljava/io/InputStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_DataInputStream__init___Ljava_io_InputStream_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/LoadState is Ljava/io/DataInputStream;
    sp -= 2;
    ((struct org_luaj_vm2_LoadState*)rstack[sp + 0].obj)->is_31 = rstack[sp + 1].obj;
    ; 
    //  line no 435 , L1439394198 , bytecode index = 
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

void bridge_org_luaj_vm2_LoadState__init___Ljava_io_InputStream_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState__init___Ljava_io_InputStream_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_org_luaj_vm2_LoadState__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_LoadState* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 734, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 91 , L1208825205 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 91;
    // new org/luaj/vm2/LoadState$GlobalsUndumper
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 129);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial org/luaj/vm2/LoadState$GlobalsUndumper.<init>(Lorg/luaj/vm2/LoadState$1;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LoadState_00024GlobalsUndumper__init___Lorg_luaj_vm2_LoadState_000241_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/LoadState instance Lorg/luaj/vm2/Globals$Undumper;
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.instance_0 = rstack[sp].obj;
    ; 
    //  line no 117 , L253601149 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic org/luaj/vm2/LoadState encoding Ljava/lang/String;
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.encoding_16 = rstack[sp].obj;
    ; 
    //  line no 120 , L26540753 , bytecode index = 
    // iconst_4
    stack[sp++].i = 4;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 27
    stack[sp++].i = 27;
    // arrstore s8  ,  L26540753 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 76
    stack[sp++].i = 76;
    // arrstore s8  ,  L26540753 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 117
    stack[sp++].i = 117;
    // arrstore s8  ,  L26540753 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 97
    stack[sp++].i = 97;
    // arrstore s8  ,  L26540753 bc index = 
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
    // putstatic org/luaj/vm2/LoadState LUA_SIGNATURE [B
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.LUA_1SIGNATURE_17 = rstack[sp].obj;
    ; 
    //  line no 123 , L648786246 , bytecode index = 
    //  bipush 6
    stack[sp++].i = 6;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 25
    stack[sp++].i = 25;
    // arrstore s8  ,  L648786246 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush -109
    stack[sp++].i = -109;
    // arrstore s8  ,  L648786246 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 13
    stack[sp++].i = 13;
    // arrstore s8  ,  L648786246 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 10
    stack[sp++].i = 10;
    // arrstore s8  ,  L648786246 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  bipush 26
    stack[sp++].i = 26;
    // arrstore s8  ,  L648786246 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  bipush 10
    stack[sp++].i = 10;
    // arrstore s8  ,  L648786246 bc index = 
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
    // putstatic org/luaj/vm2/LoadState LUAC_TAIL [B
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.LUAC_1TAIL_18 = rstack[sp].obj;
    ; 
    //  line no 155 , L120360571 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LoadState NOVALUES [Lorg/luaj/vm2/LuaValue;
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.NOVALUES_33 = rstack[sp].obj;
    ; 
    //  line no 156 , L1710814638 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/Prototype; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1493));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LoadState NOPROTOS [Lorg/luaj/vm2/Prototype;
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.NOPROTOS_34 = rstack[sp].obj;
    ; 
    //  line no 157 , L1125964210 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LocVars; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1499));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LoadState NOLOCVARS [Lorg/luaj/vm2/LocVars;
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.NOLOCVARS_35 = rstack[sp].obj;
    ; 
    //  line no 158 , L944140566 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/Upvaldesc; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1496));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LoadState NOUPVALDESCS [Lorg/luaj/vm2/Upvaldesc;
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.NOUPVALDESCS_36 = rstack[sp].obj;
    ; 
    //  line no 159 , L1534754611 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/LoadState NOINTS [I
    sp -= 1;
    static_var_org_luaj_vm2_LoadState.NOINTS_37 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_LoadState__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState__clinit____V(runtime, para[0].obj);
}


