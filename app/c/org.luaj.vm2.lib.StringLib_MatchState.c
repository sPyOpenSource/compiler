// CLASS: org/luaj/vm2/lib/StringLib$MatchState extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_StringLib_00024MatchState_static {};



__refer arr_vmtable_org_luaj_vm2_lib_StringLib_00024MatchState_from_org_luaj_vm2_lib_StringLib_00024MatchState[] = {
    func_org_luaj_vm2_lib_StringLib_00024MatchState_reset___V,  //0
    func_org_luaj_vm2_lib_StringLib_00024MatchState_add_1value__Lorg_luaj_vm2_Buffer_2IILorg_luaj_vm2_LuaValue_2_V,  //1
    func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1captures__ZII_Lorg_luaj_vm2_Varargs_2,  //2
    func_org_luaj_vm2_lib_StringLib_00024MatchState_classend__I_I,  //3
    func_org_luaj_vm2_lib_StringLib_00024MatchState_matchbracketclass__III_Z,  //4
    func_org_luaj_vm2_lib_StringLib_00024MatchState_singlematch__III_Z,  //5
    func_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I,  //6
    func_org_luaj_vm2_lib_StringLib_00024MatchState_max_1expand__III_I,  //7
    func_org_luaj_vm2_lib_StringLib_00024MatchState_min_1expand__III_I,  //8
    func_org_luaj_vm2_lib_StringLib_00024MatchState_start_1capture__III_I,  //9
    func_org_luaj_vm2_lib_StringLib_00024MatchState_end_1capture__II_I,  //10
    func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1capture__II_I,  //11
    func_org_luaj_vm2_lib_StringLib_00024MatchState_matchbalance__II_I  //12
};
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_00024MatchState_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_StringLib_00024MatchState[] = {
    {149, 13, arr_vmtable_org_luaj_vm2_lib_StringLib_00024MatchState_from_org_luaj_vm2_lib_StringLib_00024MatchState}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_lib_StringLib_00024MatchState_from_java_lang_Object}, //1
};



// locals: 4
// stack: 2
// args: 3
void func_org_luaj_vm2_lib_StringLib_00024MatchState__init___Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Varargs* p0, struct org_luaj_vm2_LuaString* p1, struct org_luaj_vm2_LuaString* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 778, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 859 , L629454893 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 859;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 860 , L2075952726 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->s_1 = rstack[sp + 1].obj;
    ; 
    //  line no 861 , L1764996806 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->p_2 = rstack[sp + 1].obj;
    ; 
    //  line no 862 , L2101249621 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/lib/StringLib$MatchState args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->args_3 = rstack[sp + 1].obj;
    ; 
    //  line no 863 , L2113604623 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/StringLib$MatchState level I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->level_4 = stack[sp + 1].i;
    ; 
    //  line no 864 , L1651162064 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/lib/StringLib$MatchState cinit [I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->cinit_5 = rstack[sp + 1].obj;
    ; 
    //  line no 865 , L379303133 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->clen_6 = rstack[sp + 1].obj;
    ; 
    //  line no 866 , L530486389 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 200
    stack[sp++].i = 200;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 867 , L983595261 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState__init___Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024MatchState__init___Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2Lorg_luaj_vm2_LuaString_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_lib_StringLib_00024MatchState_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 779, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 870 , L1188401255 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 870;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/StringLib$MatchState level I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->level_4 = stack[sp + 1].i;
    ; 
    //  line no 871 , L755210740 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 200
    stack[sp++].i = 200;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 872 , L350059321 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024MatchState_reset___V(runtime, ins);
}


// locals: 8
// stack: 5
// args: 4
void func_org_luaj_vm2_lib_StringLib_00024MatchState_add_1s__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2II_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, struct org_luaj_vm2_LuaString* p1, s32 p2, s32 p3){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 780, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 875 , L1825719826 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 875;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 876 , L1571798597 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L575935098:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1367937032;
    ; 
    //  line no 877 , L798310141 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    local[7].i = stack[--sp].i;
    ; 
    //  line no 878 , L258535644 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  bipush 37
    stack[sp++].i = 37;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L221111433;
    ; 
    //  line no 879 , L347978868 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L307829448;
    L221111433:
    //  line no 881 , L221111433 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    ; 
    //  line no 882 , L1518331471 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L940857381;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1093864783;
    L940857381:
    // iconst_0
    stack[sp++].i = 0;
    L1093864783:
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    local[7].i = stack[--sp].i;
    ; 
    //  line no 883 , L459718907 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1041109062;
    ; 
    //  line no 884 , L616674002 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  bipush 37
    stack[sp++].i = 37;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2109839984;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1661);
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
    ; 
    //  line no 887 , L1351478315 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L508512860;
    ; 
    //  line no 888 , L925973605 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1662);
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
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1663);
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
    stack[sp++].i = local[7].i;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1664);
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
    stack[sp++].i = local[6].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    goto L1179792105;
    L508512860:
    //  line no 889 , L508512860 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1665);
    L1179792105:
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
    ; 
    //  line no 884 , L2038522556 , bytecode index = 
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L2109839984:
    //  line no 890 , L2109839984 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[7].i;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L307829448;
    L1041109062:
    //  line no 891 , L1041109062 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L502848122;
    ; 
    //  line no 892 , L596910004 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/LuaString.substring(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 31, 76);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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
    goto L307829448;
    L502848122:
    //  line no 894 , L502848122 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    //  bipush 49
    stack[sp++].i = 49;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.push_onecapture(III)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    L307829448:
    //  line no 876 , L307829448 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L575935098;
    L1367937032:
    //  line no 898 , L1367937032 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_add_1s__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024MatchState_add_1s__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2II_V(runtime, ins, para[0].obj, para[1].i, para[2].i);
}


// locals: 5
// stack: 5
// args: 4
void func_org_luaj_vm2_lib_StringLib_00024MatchState_add_1value__Lorg_luaj_vm2_Buffer_2IILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, s32 p1, s32 p2, struct org_luaj_vm2_LuaValue* p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 781, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 901 , L106999035 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 901;
    rstack[sp++].obj = rlocal[4].obj;
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
        case 3:
            goto L1593458942;
        case 4:
            goto L1593458942;
        case 5:
            goto L530539368;
        case 6:
            goto L479920916;
        default:
            goto L1569754439;
    }
    L1593458942:
    //  line no 904 , L1593458942 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
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
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.add_s(Lorg/luaj/vm2/Buffer;Lorg/luaj/vm2/LuaString;II)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_StringLib_00024MatchState_add_1s__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 905 , L1161322357 , bytecode index = 
    method_exit(runtime);
    return;
    L479920916:
    //  line no 908 , L479920916 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.push_captures(ZII)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s8,s32,s32) = find_method(__ins->vm_table, 149, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    // invokevirtual org/luaj/vm2/Varargs.arg1()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 909 , L1237912220 , bytecode index = 
    goto L757708014;
    L530539368:
    //  line no 913 , L530539368 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.push_onecapture(III)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaValue.get(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 71);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 914 , L1777238524 , bytecode index = 
    goto L757708014;
    L1569754439:
    //  line no 917 , L1569754439 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1668);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 918 , L1848289347 , bytecode index = 
    method_exit(runtime);
    return;
    L757708014:
    //  line no 921 , L757708014 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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
    if(stack[--sp].i  != 0) goto L1865859824;
    ; 
    //  line no 922 , L257459516 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/LuaString.substring(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 31, 76);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    goto L304354378;
    L1865859824:
    //  line no 923 , L1865859824 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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
    if(stack[--sp].i  != 0) goto L304354378;
    ; 
    //  line no 924 , L704106237 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1669);
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
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/LuaValue.typename()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 1);
        rstack[sp].obj = __func_p(runtime);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1670);
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
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L304354378:
    //  line no 926 , L304354378 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
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
    //  line no 927 , L1880078449 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_add_1value__Lorg_luaj_vm2_Buffer_2IILorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024MatchState_add_1value__Lorg_luaj_vm2_Buffer_2IILorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].i, para[1].i, para[2].obj);
}


// locals: 7
// stack: 6
// args: 3
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1captures__ZII_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s8 p0, s32 p1, s32 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 782, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 930 , L159475521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 930;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    if(stack[--sp].i  != 0) goto L504807594;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L504807594;
    // iconst_1
    stack[sp++].i = 1;
    goto L332873513;
    L504807594:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    L332873513:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 931 , L90567568 , bytecode index = 
    stack[sp++].i = local[4].i;
    switch(stack[--sp].i){
        case 0:
            goto L795321555;
        case 1:
            goto L98826337;
        default:
            goto L131872530;
    }
    L795321555:
    //  line no 932 , L795321555 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L98826337:
    //  line no 933 , L98826337 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.push_onecapture(III)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L131872530:
    //  line no 935 , L131872530 , bytecode index = 
    stack[sp++].i = local[4].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 936 , L800088638 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1236444285:
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1541525668;
    ; 
    //  line no 937 , L1096485705 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.push_onecapture(III)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1096485705 bc index = 
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
    //  line no 936 , L1834361038 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1236444285;
    L1541525668:
    //  line no 938 , L1541525668 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // invokestatic org/luaj/vm2/LuaValue.varargsOf([Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf___3Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_push_1captures__ZII_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1captures__ZII_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].i, para[1].i);
}


// locals: 6
// stack: 4
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 783, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 942 , L1680503330 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 942;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L2100440237;
    ; 
    //  line no 943 , L566113173 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1330247343;
    ; 
    //  line no 944 , L2017797638 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/LuaString.substring(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 31, 76);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1330247343:
    //  line no 946 , L1330247343 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1675);
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
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2100440237:
    //  line no 949 , L2100440237 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L2100440237 bc index = 
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 950 , L343812839 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1150058854;
    ; 
    //  line no 951 , L1148255190 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1676);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1150058854:
    //  line no 953 , L1150058854 , bytecode index = 
    stack[sp++].i = local[4].i;
    //  bipush -2
    stack[sp++].i = -2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L366252104;
    ; 
    //  line no 954 , L1889057031 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState cinit [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->cinit_5;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L1889057031 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokestatic org/luaj/vm2/LuaValue.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L366252104:
    //  line no 956 , L366252104 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState cinit [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->cinit_5;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L366252104 bc index = 
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
    local[5].i = stack[--sp].i;
    ; 
    //  line no 957 , L1346343363 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.substring(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 31, 76);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_StringLib_00024MatchState_push_1onecapture__III_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 3
// args: 1
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_check_1capture__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 784, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 963 , L573958827 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 963;
    // iinc slot 1 value -49
    local[1].i += -49;
    ; 
    //  line no 964 , L391135083 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L1003292107;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1003292107;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L391135083 bc index = 
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
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L997033037;
    L1003292107:
    //  line no 965 , L1003292107 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1675);
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
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L997033037:
    //  line no 967 , L997033037 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_check_1capture__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_check_1capture__I_I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_capture_1to_1close___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 785, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 971 , L549293029 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 971;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 972 , L1930240356 , bytecode index = 
    // iinc slot 1 value -1
    local[1].i += -1;
    L613784740:
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L271095942;
    ; 
    //  line no 973 , L1552341957 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L1552341957 bc index = 
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
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1176164144;
    ; 
    //  line no 974 , L1323434987 , bytecode index = 
    stack[sp++].i = local[1].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1176164144:
    //  line no 972 , L1176164144 , bytecode index = 
    // iinc slot 1 value -1
    local[1].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L613784740;
    L271095942:
    //  line no 975 , L271095942 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1679);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 976 , L442125849 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_capture_1to_1close___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_capture_1to_1close___I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_classend__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 786, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 980 , L1624972302 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 980;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 37:
            goto L1989811701;
        case 91:
            goto L1106681476;
        default:
            goto L1048098469;
    }
    L1989811701:
    //  line no 982 , L1989811701 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2037764568;
    ; 
    //  line no 983 , L37981645 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1681);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L2037764568:
    //  line no 985 , L2037764568 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1106681476:
    //  line no 988 , L1106681476 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L605052357;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 94
    stack[sp++].i = 94;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L605052357;
    // iinc slot 1 value 1
    local[1].i += 1;
    L605052357:
    //  line no 990 , L605052357 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1365767549;
    ; 
    //  line no 991 , L105579928 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1682);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1365767549:
    //  line no 993 , L1365767549 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 37
    stack[sp++].i = 37;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L418958713;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L418958713;
    ; 
    //  line no 994 , L1042306518 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    L418958713:
    //  line no 995 , L418958713 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L605052357;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 93
    stack[sp++].i = 93;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L605052357;
    ; 
    //  line no 996 , L1342346098 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1048098469:
    //  line no 998 , L1048098469 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_classend__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_classend__I_I(runtime, ins);
}


// locals: 5
// stack: 2
// args: 3
s8 func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1class__II_Z(JThreadRuntime *runtime, struct org_luaj_vm2_lib_StringLib_00024MatchState* p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 787, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1003 , L1358343316 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1003;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.toLowerCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toLowerCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1004 , L1824837049 , bytecode index = 
    // getstatic org/luaj/vm2/lib/StringLib CHAR_TABLE [B
    rstack[sp].obj =static_var_org_luaj_vm2_lib_StringLib.CHAR_1TABLE_62;
    sp += 1;
    stack[sp++].i = local[0].i;
    // arrload s8  ,  L1824837049 bc index = 
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1007 , L672746064 , bytecode index = 
    stack[sp++].i = local[2].i;
    switch(stack[--sp].i){
        case 97:
            goto L442199874;
        case 98:
            goto L2133655103;
        case 99:
            goto L1345900725;
        case 100:
            goto L839998248;
        case 101:
            goto L2133655103;
        case 102:
            goto L2133655103;
        case 103:
            goto L718571091;
        case 104:
            goto L2133655103;
        case 105:
            goto L2133655103;
        case 106:
            goto L2133655103;
        case 107:
            goto L2133655103;
        case 108:
            goto L1807015220;
        case 109:
            goto L2133655103;
        case 110:
            goto L2133655103;
        case 111:
            goto L2133655103;
        case 112:
            goto L2107577743;
        case 113:
            goto L2133655103;
        case 114:
            goto L2133655103;
        case 115:
            goto L1173346575;
        case 116:
            goto L2133655103;
        case 117:
            goto L1267149311;
        case 118:
            goto L2133655103;
        case 119:
            goto L102174918;
        case 120:
            goto L52514534;
        case 121:
            goto L2133655103;
        case 122:
            goto L943573036;
        default:
            goto L2133655103;
    }
    L442199874:
    //  line no 1008 , L442199874 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1242027525;
    // iconst_1
    stack[sp++].i = 1;
    goto L1948810915;
    L1242027525:
    // iconst_0
    stack[sp++].i = 0;
    L1948810915:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L839998248:
    //  line no 1009 , L839998248 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1604247316;
    // iconst_1
    stack[sp++].i = 1;
    goto L1752461090;
    L1604247316:
    // iconst_0
    stack[sp++].i = 0;
    L1752461090:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L1807015220:
    //  line no 1010 , L1807015220 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1753714541;
    // iconst_1
    stack[sp++].i = 1;
    goto L1095273238;
    L1753714541:
    // iconst_0
    stack[sp++].i = 0;
    L1095273238:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L1267149311:
    //  line no 1011 , L1267149311 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L787122337;
    // iconst_1
    stack[sp++].i = 1;
    goto L2059572982;
    L787122337:
    // iconst_0
    stack[sp++].i = 0;
    L2059572982:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L1345900725:
    //  line no 1012 , L1345900725 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 64
    stack[sp++].i = 64;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L36657658;
    // iconst_1
    stack[sp++].i = 1;
    goto L2029680286;
    L36657658:
    // iconst_0
    stack[sp++].i = 0;
    L2029680286:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L2107577743:
    //  line no 1013 , L2107577743 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1423983012;
    // iconst_1
    stack[sp++].i = 1;
    goto L746074699;
    L1423983012:
    // iconst_0
    stack[sp++].i = 0;
    L746074699:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L1173346575:
    //  line no 1014 , L1173346575 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L405896924;
    // iconst_1
    stack[sp++].i = 1;
    goto L1309335839;
    L405896924:
    // iconst_0
    stack[sp++].i = 0;
    L1309335839:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L718571091:
    //  line no 1015 , L718571091 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 25
    stack[sp++].i = 25;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1267105885;
    // iconst_1
    stack[sp++].i = 1;
    goto L1481818223;
    L1267105885:
    // iconst_0
    stack[sp++].i = 0;
    L1481818223:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L102174918:
    //  line no 1016 , L102174918 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 9
    stack[sp++].i = 9;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L164332069;
    // iconst_1
    stack[sp++].i = 1;
    goto L1991278377;
    L164332069:
    // iconst_0
    stack[sp++].i = 0;
    L1991278377:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L52514534:
    //  line no 1017 , L52514534 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush -128
    stack[sp++].i = -128;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L929697158;
    // iconst_1
    stack[sp++].i = 1;
    goto L1650813924;
    L929697158:
    // iconst_0
    stack[sp++].i = 0;
    L1650813924:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L943573036:
    //  line no 1018 , L943573036 , bytecode index = 
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  != 0) goto L1408482749;
    // iconst_1
    stack[sp++].i = 1;
    goto L873634936;
    L1408482749:
    // iconst_0
    stack[sp++].i = 0;
    L873634936:
    local[4].i = stack[--sp].i;
    ; 
    goto L735937428;
    L2133655103:
    //  line no 1019 , L2133655103 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[0].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L573200870;
    // iconst_1
    stack[sp++].i = 1;
    goto L1819940427;
    L573200870:
    // iconst_0
    stack[sp++].i = 0;
    L1819940427:
    method_exit(runtime);
    return stack[sp - 1].i;
    L735937428:
    //  line no 1021 , L735937428 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1277933280;
    stack[sp++].i = local[4].i;
    goto L1046665075;
    L1277933280:
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  != 0) goto L1324829744;
    // iconst_1
    stack[sp++].i = 1;
    goto L1046665075;
    L1324829744:
    // iconst_0
    stack[sp++].i = 0;
    L1046665075:
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_match_1class__II_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1class__II_Z(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 5
// stack: 3
// args: 3
s8 func_org_luaj_vm2_lib_StringLib_00024MatchState_matchbracketclass__III_Z(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 788, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1025 , L1670313965 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1025;
    // iconst_1
    stack[sp++].i = 1;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1026 , L1275035040 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 94
    stack[sp++].i = 94;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1058876963;
    ; 
    //  line no 1027 , L1399701152 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1028 , L1204296383 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    L1058876963:
    //  line no 1030 , L1058876963 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2003463579;
    ; 
    //  line no 1031 , L567294307 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 37
    stack[sp++].i = 37;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L527829831;
    ; 
    //  line no 1032 , L418179060 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    ; 
    //  line no 1033 , L1020155847 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/StringLib$MatchState.match_class(II)Z
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1class__II_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L1058876963;
    ; 
    //  line no 1034 , L485845532 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L527829831:
    //  line no 1036 , L527829831 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 45
    stack[sp++].i = 45;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L871790326;
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L871790326;
    ; 
    //  line no 1037 , L1281025083 , bytecode index = 
    // iinc slot 2 value 2
    local[2].i += 2;
    ; 
    //  line no 1038 , L40170008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1058876963;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1058876963;
    ; 
    //  line no 1039 , L896982466 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L871790326:
    //  line no 1041 , L871790326 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1058876963;
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2003463579:
    //  line no 1043 , L2003463579 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  != 0) goto L901205084;
    // iconst_1
    stack[sp++].i = 1;
    goto L777457133;
    L901205084:
    // iconst_0
    stack[sp++].i = 0;
    L777457133:
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_matchbracketclass__III_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_matchbracketclass__III_Z(runtime, ins, para[0].i, para[1].i);
}


// locals: 4
// stack: 5
// args: 3
s8 func_org_luaj_vm2_lib_StringLib_00024MatchState_singlematch__III_Z(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 789, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1047 , L136157810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1047;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 37:
            goto L292138977;
        case 46:
            goto L748842359;
        case 91:
            goto L1208532123;
        default:
            goto L122155649;
    }
    L748842359:
    //  line no 1048 , L748842359 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L292138977:
    //  line no 1049 , L292138977 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/lib/StringLib$MatchState.match_class(II)Z
    {
        sp -= 3;
        stack[sp].i = func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1class__II_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1208532123:
    //  line no 1050 , L1208532123 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.matchbracketclass(III)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L122155649:
    //  line no 1051 , L122155649 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1893960929;
    // iconst_1
    stack[sp++].i = 1;
    goto L749282235;
    L1893960929:
    // iconst_0
    stack[sp++].i = 0;
    L749282235:
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_singlematch__III_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_singlematch__III_Z(runtime, ins, para[0].i, para[1].i);
}

ExceptionItem arr_extable_func_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I = {15, arr_extable_func_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I};

// locals: 9
// stack: 5
// args: 2
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 790, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    // try catch :L515809288 L1926673338 L394785440 (
    // try catch :L2112233878 L372469954 L394785440 (
    // try catch :L1371495133 L2030411960 L394785440 (
    // try catch :L899929247 L949684105 L394785440 (
    // try catch :L333040629 L1200470358 L394785440 (
    // try catch :L1822525972 L208043846 L394785440 (
    // try catch :L1371376476 L2068897588 L394785440 (
    // try catch :L457247584 L610454273 L394785440 (
    // try catch :L431506362 L1693226694 L394785440 (
    // try catch :L2003147568 L1164799006 L394785440 (
    // try catch :L504582810 L516537656 L394785440 (
    // try catch :L1160649162 L1796047085 L394785440 (
    // try catch :L1871612052 L1023268896 L394785440 (
    // try catch :L153646652 L237344028 L394785440 (
    // try catch :L368342628 L1192923170 L394785440 (
    ; 
    //  line no 1060 , L231311211 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1060;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
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
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    if(stack[--sp].i  != 0) goto L515809288;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1689);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L515809288:
    __frame->bytecodeIndex = 
    //  line no 1066 , L515809288 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2112233878;
    ; 
    //  line no 1067 , L795242171 , bytecode index = 
    stack[sp++].i = local[1].i;
    local[3].i = stack[--sp].i;
    L1926673338:
    __frame->bytecodeIndex = 
    //  line no 1139 , L1926673338 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1067 , L429353573 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2112233878:
    __frame->bytecodeIndex = 
    //  line no 1068 , L2112233878 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 36:
            goto L431506362;
        case 37:
            goto L333040629;
        case 38:
            goto L2003147568;
        case 39:
            goto L2003147568;
        case 40:
            goto L169833205;
        case 41:
            goto L899929247;
        default:
            goto L2003147568;
    }
    L169833205:
    //  line no 1070 , L169833205 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1371495133;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 41
    stack[sp++].i = 41;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1371495133;
    ; 
    //  line no 1071 , L1261198850 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush -2
    stack[sp++].i = -2;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.start_capture(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 9);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    L372469954:
    __frame->bytecodeIndex = 
    //  line no 1139 , L372469954 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1071 , L1470358122 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1371495133:
    __frame->bytecodeIndex = 
    //  line no 1073 , L1371495133 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_-1
    stack[sp++].i = -1;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.start_capture(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 9);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    L2030411960:
    __frame->bytecodeIndex = 
    //  line no 1139 , L2030411960 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1073 , L1975873209 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L899929247:
    __frame->bytecodeIndex = 
    //  line no 1075 , L899929247 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.end_capture(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 10);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    L949684105:
    __frame->bytecodeIndex = 
    //  line no 1139 , L949684105 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1075 , L79438382 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L333040629:
    __frame->bytecodeIndex = 
    //  line no 1077 , L333040629 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L768192757;
    ; 
    //  line no 1078 , L1697752980 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1681);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L768192757:
    //  line no 1079 , L768192757 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 98:
            goto L1578587450;
        case 102:
            goto L1052317717;
        default:
            goto L996125997;
    }
    L1578587450:
    //  line no 1081 , L1578587450 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.matchbalance(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 12);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 1082 , L1457263953 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1822525972;
    // iconst_-1
    stack[sp++].i = -1;
    local[3].i = stack[--sp].i;
    L1200470358:
    __frame->bytecodeIndex = 
    //  line no 1139 , L1200470358 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1082 , L271379554 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1822525972:
    __frame->bytecodeIndex = 
    //  line no 1083 , L1822525972 , bytecode index = 
    // iinc slot 2 value 4
    local[2].i += 4;
    ; 
    //  line no 1084 , L1962329560 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L515809288;
    L1052317717:
    //  line no 1086 , L1052317717 , bytecode index = 
    // iinc slot 2 value 2
    local[2].i += 2;
    ; 
    //  line no 1087 , L41489123 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L884603232;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 91
    stack[sp++].i = 91;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1124162665;
    L884603232:
    //  line no 1088 , L884603232 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1690);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1124162665:
    //  line no 1090 , L1124162665 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.classend(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 149, 3);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1091 , L26970580 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L1270836494;
    // iconst_0
    stack[sp++].i = 0;
    goto L817299424;
    L1270836494:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L817299424:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1092 , L2031951755 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L605420629;
    // iconst_0
    stack[sp++].i = 0;
    goto L351417028;
    L605420629:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L351417028:
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1093 , L331122245 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.matchbracketclass(III)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L38544126;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 1094 , L154173878 , bytecode index = 
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.matchbracketclass(III)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1371376476;
    L38544126:
    //  line no 1095 , L38544126 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[6].i = stack[--sp].i;
    L208043846:
    __frame->bytecodeIndex = 
    //  line no 1139 , L208043846 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1095 , L215082566 , bytecode index = 
    stack[sp++].i = local[6].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1371376476:
    __frame->bytecodeIndex = 
    //  line no 1096 , L1371376476 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1097 , L2074658615 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L515809288;
    L996125997:
    //  line no 1100 , L996125997 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1101 , L412111214 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L431506362;
    ; 
    //  line no 1102 , L362827515 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match_capture(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 11);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 1103 , L381708767 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L457247584;
    ; 
    //  line no 1104 , L736920911 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    L2068897588:
    __frame->bytecodeIndex = 
    //  line no 1139 , L2068897588 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1104 , L837659261 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L457247584:
    __frame->bytecodeIndex = 
    //  line no 1105 , L457247584 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    L610454273:
    __frame->bytecodeIndex = 
    //  line no 1139 , L610454273 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1105 , L648936749 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L431506362:
    __frame->bytecodeIndex = 
    //  line no 1110 , L431506362 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2003147568;
    ; 
    //  line no 1111 , L859236022 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2084559714;
    stack[sp++].i = local[1].i;
    goto L542980314;
    L2084559714:
    // iconst_-1
    stack[sp++].i = -1;
    L542980314:
    local[3].i = stack[--sp].i;
    L1693226694:
    __frame->bytecodeIndex = 
    //  line no 1139 , L1693226694 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1111 , L1766911337 , bytecode index = 
    stack[sp++].i = local[3].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2003147568:
    __frame->bytecodeIndex = 
    //  line no 1113 , L2003147568 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.classend(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 149, 3);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1114 , L1842853283 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1865516976;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.singlematch(III)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 5);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1865516976;
    // iconst_1
    stack[sp++].i = 1;
    goto L644082020;
    L1865516976:
    // iconst_0
    stack[sp++].i = 0;
    L644082020:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1115 , L1219916644 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L412925308;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L2079565272;
    L412925308:
    // iconst_0
    stack[sp++].i = 0;
    L2079565272:
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1117 , L1122130699 , bytecode index = 
    stack[sp++].i = local[5].i;
    switch(stack[--sp].i){
        case 42:
            goto L968113504;
        case 43:
            goto L1160649162;
        case 45:
            goto L1871612052;
        case 63:
            goto L1153302647;
        default:
            goto L153646652;
    }
    L1153302647:
    //  line no 1120 , L1153302647 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L504582810;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[6].i = stack[--sp].i;
    ; 
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L504582810;
    ; 
    //  line no 1121 , L1928301845 , bytecode index = 
    stack[sp++].i = local[6].i;
    local[7].i = stack[--sp].i;
    L1164799006:
    __frame->bytecodeIndex = 
    //  line no 1139 , L1164799006 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1121 , L1789452565 , bytecode index = 
    stack[sp++].i = local[7].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L504582810:
    __frame->bytecodeIndex = 
    //  line no 1122 , L504582810 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1123 , L1579280783 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L515809288;
    L968113504:
    //  line no 1125 , L968113504 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.max_expand(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 7);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    L516537656:
    __frame->bytecodeIndex = 
    //  line no 1139 , L516537656 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1125 , L1370074462 , bytecode index = 
    stack[sp++].i = local[7].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1160649162:
    __frame->bytecodeIndex = 
    //  line no 1127 , L1160649162 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L1595938139;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.max_expand(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 7);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1923999715;
    L1595938139:
    // iconst_-1
    stack[sp++].i = -1;
    L1923999715:
    local[7].i = stack[--sp].i;
    L1796047085:
    __frame->bytecodeIndex = 
    //  line no 1139 , L1796047085 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1127 , L596706728 , bytecode index = 
    stack[sp++].i = local[7].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1871612052:
    __frame->bytecodeIndex = 
    //  line no 1129 , L1871612052 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.min_expand(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 8);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    L1023268896:
    __frame->bytecodeIndex = 
    //  line no 1139 , L1023268896 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1129 , L1070501849 , bytecode index = 
    stack[sp++].i = local[7].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L153646652:
    __frame->bytecodeIndex = 
    //  line no 1131 , L153646652 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  != 0) goto L368342628;
    ; 
    //  line no 1132 , L1620823990 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[7].i = stack[--sp].i;
    L237344028:
    __frame->bytecodeIndex = 
    //  line no 1139 , L237344028 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1132 , L2106900153 , bytecode index = 
    stack[sp++].i = local[7].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L368342628:
    __frame->bytecodeIndex = 
    //  line no 1133 , L368342628 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    ; 
    //  line no 1134 , L1443055846 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1135 , L502838712 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L515809288;
    L394785440:
    //  line no 1139 , L394785440 , bytecode index = 
    rlocal[8].obj = rstack[--sp].obj;
    L1192923170:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->matchdepth_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState matchdepth I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->matchdepth_0 = stack[sp + 1].i;
    ; 
    //  line no 1140 , L589311950 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    // athrow
    //     L589311950 in labeltable is :L589311950
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 1140;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L394785440;
        case 1 : goto L394785440;
        case 2 : goto L394785440;
        case 3 : goto L394785440;
        case 4 : goto L394785440;
        case 5 : goto L394785440;
        case 6 : goto L394785440;
        case 7 : goto L394785440;
        case 8 : goto L394785440;
        case 9 : goto L394785440;
        case 10 : goto L394785440;
        case 11 : goto L394785440;
        case 12 : goto L394785440;
        case 13 : goto L394785440;
        case 14 : goto L394785440;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_match__II_I(runtime, ins, para[0].i);
}


// locals: 6
// stack: 4
// args: 3
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_max_1expand__III_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 791, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1144 , L932257672 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1144;
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1864116663:
    //  line no 1145 , L1864116663 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1298146757;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 1146 , L2133344792 , bytecode index = 
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.singlematch(III)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 5);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1298146757;
    ; 
    //  line no 1147 , L1081769770 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1864116663;
    L1298146757:
    //  line no 1148 , L1298146757 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  < 0) goto L1319483139;
    ; 
    //  line no 1149 , L44559647 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1150 , L1067599825 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L749927456;
    ; 
    //  line no 1151 , L1330400026 , bytecode index = 
    stack[sp++].i = local[5].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L749927456:
    //  line no 1152 , L749927456 , bytecode index = 
    // iinc slot 4 value -1
    local[4].i += -1;
    ; 
    //  line no 1153 , L1916700921 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1298146757;
    L1319483139:
    //  line no 1154 , L1319483139 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_max_1expand__III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_max_1expand__III_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 4
// args: 3
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_min_1expand__III_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 792, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    L1692885405:
    //  line no 1159 , L1692885405 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1159;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1160 , L1230955136 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1336001042;
    ; 
    //  line no 1161 , L1856158867 , bytecode index = 
    stack[sp++].i = local[4].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1336001042:
    //  line no 1162 , L1336001042 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L823575379;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.singlematch(III)Z
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 149, 5);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L823575379;
    ; 
    //  line no 1163 , L258112787 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    goto L1318227903;
    L823575379:
    //  line no 1164 , L823575379 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1318227903:
    //  line no 1165 , L1318227903 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1692885405;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_min_1expand__III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_min_1expand__III_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 6
// stack: 3
// args: 3
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_start_1capture__III_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 793, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 1170 , L841262455 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1170;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1171 , L775081157 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1955021259;
    ; 
    //  line no 1172 , L1044705957 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1695);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1955021259:
    //  line no 1174 , L1955021259 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState cinit [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->cinit_5;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L1955021259 bc index = 
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
    //  line no 1175 , L693958407 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    // arrstore s32  ,  L693958407 bc index = 
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
    //  line no 1176 , L288379405 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState level I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->level_4 = stack[sp + 1].i;
    ; 
    //  line no 1177 , L1601687801 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[4].i = stack[--sp].i;
    ; 
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L144040807;
    ; 
    //  line no 1178 , L455501890 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$MatchState level I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->level_4;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$MatchState level I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp + 0].obj)->level_4 = stack[sp + 1].i;
    L144040807:
    //  line no 1179 , L144040807 , bytecode index = 
    stack[sp++].i = local[4].i;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_start_1capture__III_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_start_1capture__III_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 5
// args: 2
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_end_1capture__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 794, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 1183 , L1119072377 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1183;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.capture_to_close()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_StringLib_00024MatchState_capture_1to_1close___I(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1185 , L1696263571 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState cinit [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->cinit_5;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload s32  ,  L1696263571 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1696263571 bc index = 
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
    //  line no 1186 , L1305935114 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$MatchState.match(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 149, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[4].i = stack[--sp].i;
    ; 
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1414967210;
    ; 
    //  line no 1187 , L1720891078 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iconst_-1
    stack[sp++].i = -1;
    // arrstore s32  ,  L1720891078 bc index = 
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
    L1414967210:
    //  line no 1188 , L1414967210 , bytecode index = 
    stack[sp++].i = local[4].i;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_end_1capture__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_end_1capture__II_I(runtime, ins, para[0].i);
}


// locals: 4
// stack: 5
// args: 2
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1capture__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 795, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 1192 , L1486726131 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1192;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokespecial org/luaj/vm2/lib/StringLib$MatchState.check_capture(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_org_luaj_vm2_lib_StringLib_00024MatchState_check_1capture__I_I(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 1193 , L970419381 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState clen [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->clen_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L970419381 bc index = 
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1194 , L1241569743 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1731656333;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState cinit [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->cinit_5;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload s32  ,  L1241569743 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    ; 
    //  line no 1195 , L1384210339 , bytecode index = 
    // invokestatic org/luaj/vm2/LuaString.equals(Lorg/luaj/vm2/LuaString;ILorg/luaj/vm2/LuaString;II)Z
    {
        sp -= 6;
        stack[sp].i = func_org_luaj_vm2_LuaString_equals__Lorg_luaj_vm2_LuaString_2ILorg_luaj_vm2_LuaString_2II_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1731656333;
    ; 
    //  line no 1196 , L1345401730 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1731656333:
    //  line no 1198 , L1731656333 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_match_1capture__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_match_1capture__II_I(runtime, ins, para[0].i);
}


// locals: 8
// stack: 3
// args: 2
s32 func_org_luaj_vm2_lib_StringLib_00024MatchState_matchbalance__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 796, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 1202 , L1275143523 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 1202;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 1203 , L346359559 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1297189682;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1272123492;
    L1297189682:
    //  line no 1204 , L1297189682 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1699);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1272123492:
    //  line no 1206 , L1272123492 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 1207 , L238816832 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L849198527;
    ; 
    //  line no 1208 , L1934932165 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L849198527:
    //  line no 1209 , L849198527 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 1210 , L551016187 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1324843695;
    ; 
    //  line no 1211 , L299413131 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1324843695:
    //  line no 1212 , L1324843695 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState p Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->p_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 1213 , L1201454821 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[7].i = stack[--sp].i;
    L1508038883:
    //  line no 1214 , L1508038883 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L728943498;
    ; 
    //  line no 1215 , L2139788441 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1564698139;
    ; 
    //  line no 1216 , L304715920 , bytecode index = 
    // iinc slot 7 value -1
    local[7].i += -1;
    stack[sp++].i = local[7].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  != 0) goto L1508038883;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1564698139:
    //  line no 1218 , L1564698139 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$MatchState s Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024MatchState*)rstack[sp - 1].obj)->s_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[5].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1508038883;
    // iinc slot 7 value 1
    local[7].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1508038883;
    L728943498:
    //  line no 1220 , L728943498 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_org_luaj_vm2_lib_StringLib_00024MatchState_matchbalance__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_StringLib_00024MatchState_matchbalance__II_I(runtime, ins, para[0].i);
}


